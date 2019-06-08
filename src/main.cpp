#include <iostream>
#include <NotAVegetable.h>

class ExampleLayer : public NotAVegetable::Layer {
public:
    ExampleLayer()
            : Layer("Example") {

    }

    void OnUpdate() override {
        NAV_INFO("ExampleLayer::Update");
    }

    void OnEvent(NotAVegetable::Event &event) override {
        NAV_TRACE("{0}", event);
    }
};

class MakankMshHna : public NotAVegetable::Application {
public:
    MakankMshHna() {
        PushLayer(new ExampleLayer());
    }

    ~MakankMshHna() {

    }

};

NotAVegetable::Application* NotAVegetable::CreateApplication() {
    return new MakankMshHna();
}

