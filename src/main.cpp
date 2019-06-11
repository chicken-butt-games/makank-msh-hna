#include <iostream>
#include <NotAVegetable.h>

class ExampleLayer : public NotAVegetable::Layer {
public:
    ExampleLayer()
            : Layer("Example") {

    }

    void OnUpdate() override {

        if (NotAVegetable::Input::IsKeyPressed(NAV_KEY_TAB)) {
            NAV_INFO("Tab key is pressed");
        }
    }

    void OnEvent(NotAVegetable::Event &event) override {
        if (event.GetEventType() == NotAVegetable::EventType::KeyPressed) {
            NotAVegetable::KeyPressedEvent &e = (NotAVegetable::KeyPressedEvent &) event;
            NAV_TRACE("{0}", (char) e.GetKeyCode());
        }
    }
};

class MakankMshHna : public NotAVegetable::Application {
public:
    MakankMshHna() {
        PushLayer(new ExampleLayer());
        PushOverlay(new NotAVegetable::ImGuiLayer());
    }

    ~MakankMshHna() {

    }

};

NotAVegetable::Application* NotAVegetable::CreateApplication() {
    return new MakankMshHna();
}

