#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication(); // this is a function that we will define somewhere else
													   // which will actually return that application for us.
													   // "CreateApplication" is something we will implement in client.
													   // We're actually gonna end up declaring this function inside 
													   //Application.h 
int main(int argc, char** argv) // this will create our application Hazel for us.
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif