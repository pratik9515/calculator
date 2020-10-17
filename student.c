        elif 'open cal' in query:
            calpath="C:\\Windows\\System32\\calc.exe"
            speak("opening Calculator")
            os.startfile(calpath)
        elif 'open word' in query:
            wordpath="C:\\Program Files\\Microsoft Office\\root\\Office16\\WINWORD.EXE"
            speak("opening MicroSoft Word")
            os.startfile(wordpath)
        elif 'open control' in query:
            controlpath="C:\\Windows\\System32\\control.exe"
            os.startfile(controlpath)
        elif 'open pic' in query:
            picpath="D:\\Images & Videos\\picachu.jpg"
            os.startfile(picpath)
        elif 'open code block' in query:
            blockpath="C:\\Program Files (x86)\\CodeBlocks\\codeblocks.exe"
            os.startfile(picpath)
        elif 'open pycharm' in query:
            pypath="C:\\Program Files\\JetBrains\\PyCharm Community Edition 2020.1\\bin\\pycharm64.exe"
            os.startfile(pypath)

        
        
        elif 'email to me' in query:
            try:
                speak("What Should I Send!")
                content = takeCommand()
                to = "pratikkumar753@gmail.com"    
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry Sir, The Email not send")

        elif 'exit' in query:
            print("Computer: Quitting sir,Thank you for your time.")
            speak("Quitting sir,Thank you for your time.")
            print(exit())

        elif 'introduce yourself' in query:
            temp1="hii I am jarvis. I am a Assistant. Which is Develop By, Prateek Kumar"
            speak(temp1)


        elif 'hello' in query:
            temp3="hello,Sir How may I help you"
            print(temp3)
            speak(temp3)

                    
         elif 'quit' or 'exit' in query:
             speak("Thank you sir")
             print(exit())
         
        elif 'email to me' in query:
            try:
                speak("What Should I Send!")
                content = takeCommand()
                to = "pratikkumar753@gmail.com"    
                sendEmail(to, content)
                speak("Email has been sent!")
            except Exception as e:
                print(e)
                speak("Sorry Sir, The Email not send")

        elif 'exit' in query:
            print("Computer: Quitting sir,Thank you for your time.")
            speak("Quitting sir,Thank you for your time.")
            print(exit())

        elif 'introduce yourself' in query:
            temp1="hii I am jarvis. I am a Assistant. Which is Develop By, Prateek Kumar"
            speak(temp1)


        elif 'hello' in query:
            temp3="hello,Sir How may I help you"
            print(temp3)
            speak(temp3)

                    
         elif 'quit' or 'exit' in query:
             speak("Thank you sir")
             print(exit())
