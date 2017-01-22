using System;
using UnityEngine;
using UnityEngine.EventSystems;

namespace UnityStandardAssets.CrossPlatformInput
{
	public class Joystick : MonoBehaviour, IPointerDownHandler, IPointerUpHandler, IDragHandler
	{
		public enum AxisOption
		{
			// Options for which axes to use
			Both, // Use both
			OnlyHorizontal, // Only horizontal
			OnlyVertical // Only vertical
		}

		public int MovementRange = 100;
		public float minPosX = 0;
		public float maxPosX = 0;
		public AxisOption axesToUse = AxisOption.Both; // The options for the axes that the still will use
		public string horizontalAxisName = "Horizontal"; // The name given to the horizontal axis for the cross platform input
		public string verticalAxisName = "Vertical"; // The name given to the vertical axis for the cross platform input
		public bool backToOrigin = true;
		public AudioClip movementSound;

		private AudioSource audioSource;
		Vector3 m_StartPos;
		bool m_UseX; // Toggle for using the x axis
		bool m_UseY; // Toggle for using the Y axis
		CrossPlatformInputManager.VirtualAxis m_HorizontalVirtualAxis; // Reference to the joystick in the cross platform input
		CrossPlatformInputManager.VirtualAxis m_VerticalVirtualAxis; // Reference to the joystick in the cross platform input

        void Start()
        {
			audioSource = GetComponent<AudioSource> ();
			m_StartPos = transform.position;
			CreateVirtualAxes();
      
        }

		void UpdateVirtualAxes(Vector3 value)
		{
			var delta = m_StartPos - value;
			delta.y = -delta.y;
			delta /= MovementRange;
			if (m_UseX)
			{
				m_HorizontalVirtualAxis.Update(-delta.x);
			}

			if (m_UseY)
			{
				m_VerticalVirtualAxis.Update(delta.y);
			}
		}

		void CreateVirtualAxes()
		{
			// set axes to use
			m_UseX = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyHorizontal);
			m_UseY = (axesToUse == AxisOption.Both || axesToUse == AxisOption.OnlyVertical);

			// create new axes based on axes to use
			if (m_UseX)
			{
				m_HorizontalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(horizontalAxisName);
				CrossPlatformInputManager.RegisterVirtualAxis(m_HorizontalVirtualAxis);
			}
			if (m_UseY)
			{
				m_VerticalVirtualAxis = new CrossPlatformInputManager.VirtualAxis(verticalAxisName);
				CrossPlatformInputManager.RegisterVirtualAxis(m_VerticalVirtualAxis);
			}
		}


		public void OnDrag(PointerEventData data)
		{
			Vector3 newPos = Vector3.zero;
			if (GlobalSettings.Instance.soundsOn) {
				audioSource.PlayOneShot (movementSound);
			}

			if (m_UseX)
			{
				Debug.Log ("Dragging Joystick HOR" + data.position.x);
				int delta = (int)(data.position.x - m_StartPos.x);
				newPos.x = delta;
			}

			if (m_UseY)
			{
				Debug.Log ("Dragging Joystick VERT" + data.position.x);
				int delta = (int)(data.position.y - m_StartPos.y);
				newPos.y = delta;
			}
			if (minPosX != 0) {
				if (newPos.x <= minPosX) {
					transform.localPosition = new Vector3 (minPosX, newPos.y, newPos.z);
					//transform.position = Vector3.ClampMagnitude (new Vector3 (minPosX, newPos.y, newPos.z), MovementRange) + m_StartPos;
				} else if (newPos.x >= maxPosX) {
					transform.localPosition = new Vector3 (maxPosX, newPos.y, newPos.z);
					//transform.position = Vector3.ClampMagnitude(new Vector3 (maxPosX, newPos.y, newPos.z), MovementRange) + m_StartPos;
				} else if (newPos.x > minPosX && newPos.x < maxPosX) {
					transform.localPosition = new Vector3 (newPos.x, newPos.y, newPos.z);
					//transform.position = Vector3.ClampMagnitude(new Vector3(newPos.x, newPos.y, newPos.z), MovementRange) + m_StartPos;
				}
			} else {
				transform.position = Vector3.ClampMagnitude (new Vector3 (newPos.x, newPos.y, newPos.z), MovementRange) + m_StartPos;
			}
			UpdateVirtualAxes(transform.position);
		}


		public void OnPointerUp(PointerEventData data)
		{	
			if (GlobalSettings.Instance.soundsOn) {
				audioSource.Stop ();
			}
			if (backToOrigin) {
				transform.position = m_StartPos;
				UpdateVirtualAxes (m_StartPos);
			}
		}


		public void OnPointerDown(PointerEventData data) { }

		void OnDisable()
		{
			// remove the joysticks from the cross platform input
			if (m_UseX)
			{
				m_HorizontalVirtualAxis.Remove();
			}
			if (m_UseY)
			{
				m_VerticalVirtualAxis.Remove();
			}
		}
	}
}