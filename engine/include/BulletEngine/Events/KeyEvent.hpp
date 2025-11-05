#pragma once

#include "BulletEngine/Events/Event.hpp"
#include "spdlog/sinks/basic_file_sink-inl.h"

namespace BulletEngine
{
	class BULLETENGINE_API KeyEvent : public Event
	{
	public:
		int GetKeyCode() const { return m_KeyCode; }

		EVENT_CLASS_CATEGORY(EEventCategory::EventCategoryKeyboard | EEventCategory::EventCategoryInput)

	protected:
		KeyEvent(const int keyCode)
			: m_KeyCode(keyCode)
		{
		}

		int m_KeyCode;
	};

	class BULLETENGINE_API KeyPressedEvent : public KeyEvent
	{
	public:
		KeyPressedEvent(const int keyCode, const int repeatCount)
			: KeyEvent(keyCode), m_RepeatCount(repeatCount)
		{
		}

		int GetRepeatCount() const { return m_RepeatCount; }

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent: " << m_KeyCode << "(" << m_RepeatCount << " repeats)";
			return ss.str();
		}

		EVENT_CLASS_TYPE(EEventType::KeyPressed)

	private:
		int m_RepeatCount;
	};

	class BULLETENGINE_API KeyReleasedEvent : public KeyEvent
	{
	public:
		KeyReleasedEvent(const int keyCode)
			: KeyEvent(keyCode)
		{
		}

		std::string ToString() const override
		{
			std::stringstream ss;
			ss << "KeyReleasedEvent: " << m_KeyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(EEventType::KeyReleased)
	};
}