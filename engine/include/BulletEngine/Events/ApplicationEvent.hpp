#pragma once

#include "BulletEngine/Events/Event.hpp"

namespace BulletEngine
{
	class BULLETENGINE_API WindowResizeEvent : public Event
	{
	public:
		WindowResizeEvent(const unsigned int width, const unsigned int height)
			: m_Width(width), m_Height(height)
		{
		}

		unsigned int GetWidth() const { return m_Width; }
		unsigned int GetHeight() const { return m_Height; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
			return ss.str();
		}

		EVENT_CLASS_TYPE(EEventType::WindowResize)
		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryApplication)

	private:
		unsigned int m_Width, m_Height;
	};

	class BULLETENGINE_API WindowCloseEvent : public Event
	{
	public:
		WindowCloseEvent() = default;

		EVENT_CLASS_TYPE(EEventType::WindowClosed)
		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryApplication)
	};

	class BULLETENGINE_API AppTickEvent : public Event
	{
	public:
		AppTickEvent() = default;

		EVENT_CLASS_TYPE(EEventType::AppTick)
		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryApplication)
	};

	class BULLETENGINE_API AppUpdateEvent : public Event
	{
	public:
		AppUpdateEvent() = default;

		EVENT_CLASS_TYPE(EEventType::AppUpdate)
		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryApplication)
	};

	class BULLETENGINE_API AppRenderEvent : public Event
	{
	public:
		AppRenderEvent() = default;

		EVENT_CLASS_TYPE(EEventType::AppRender)
		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryApplication)
	};
}