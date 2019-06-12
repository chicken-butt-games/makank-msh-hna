#include <iostream>
#include <NotAVegetable.h>
#include <imgui.h>

class ExampleLayer : public NotAVegetable::Layer {
public:
    ExampleLayer()
            : Layer("Example") {

    }

    void OnUpdate() override {

    }

    virtual void OnImGuiRender() override {
        ImGui::Begin("Test");
        ImGui::Text("Hello world");
        ImGui::End();
    }

    void OnEvent(NotAVegetable::Event &event) override {
        if (event.GetEventType() == NotAVegetable::EventType::KeyPressed) {
            auto &e = (NotAVegetable::KeyPressedEvent &) event;
            NAV_TRACE("Pressed {0}", (char) e.GetKeyCode());
        }

        if (event.GetEventType() == NotAVegetable::EventType::KeyReleased) {
            auto &e = (NotAVegetable::KeyReleasedEvent &) event;
            NAV_TRACE("Released {0}", (char) e.GetKeyCode());
        }

        if (event.GetEventType() == NotAVegetable::EventType::JoyStickConnected) {
            auto &e = (NotAVegetable::JoyStickConnectedEvent &) event;
            NAV_TRACE("Controller ID: {0}", e.GetJoyStickID());
        }

    }


};

class MakankMshHna : public NotAVegetable::Application {
public:
    MakankMshHna() {
        PushLayer(new ExampleLayer());
    }

    ~MakankMshHna() override = default;

};

NotAVegetable::Application* NotAVegetable::CreateApplication() {
    return new MakankMshHna();
}

