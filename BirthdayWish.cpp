#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("birthday.html");

    file << "<!DOCTYPE html>\n";
    file << "<html>\n";
    file << "<head>\n";
    file << "<title>Happy Birthday</title>\n";

    file << "<style>\n";
    file << "body { margin:0; background: linear-gradient(to right, #ffdde1, #ee9ca7); text-align:center; font-family: Arial; overflow:hidden; }\n";
    file << "h1 { font-size:50px; color:#d10068; margin-top:50px; }\n";
    file << "p { font-size:22px; width:70%; margin:auto; line-height:1.6; }\n";
    file << ".btn { padding:15px 30px; font-size:20px; background:#ff4b5c; color:white; border:none; border-radius:10px; cursor:pointer; margin-top:20px; }\n";
    file << "#countdown { font-size:28px; margin-top:20px; color:#000; }\n";
    file << ".heart { position:absolute;  font-size:20px; animation: fall 5s linear infinite; }\n";
    file << "@keyframes fall { 0%{transform: translateY(-10vh);} 100%{transform: translateY(110vh);} }\n";
    file << "</style>\n";

    file << "</head>\n";
    file << "<body>\n";

    file << "<h1>Happy Birthday Riya 🎂</h1>\n";
    file << "<h2>Today is all about YOU 🎉🦋</h2>\n";
    

    file << "<button class='btn' onclick='surprise()'>Click For Surprise 🎁</button>\n";
    file << "<p id='message'></p>\n";

    file << "<audio autoplay loop>\n";
    file << "<source src='https://www2.cs.uic.edu/~i101/SoundFiles/HappyBirthday.mid' type='audio/midi'>\n";
    file << "</audio>\n";

    file << "<script>\n";

    // Surprise Message
    file << "function surprise(){\n";
    file << "document.getElementById('message').innerHTML = "
            "'I just want you to stay happy<br>Valo thakis sob somoy.Jibone onek shanti,safollo ar sundor muhurto asuuk.Keep smiling always..✨<br><br>FROM YOUR FRIEND--Sayantan💕🎊✨🎂';\n";
    file << "createEmojis();\n";
    file << "}\n";

    // Heart Animation
    file <<"function createEmojis(){\n";
    file<<"var emojis = [\n";
     file<<"  '❤️','💖','💕','💘','💝','💗','💓','💞',\n";
     file<<"  '🥰','😍','😇','🌸','🌹','🌷',\n";
     file<<"  '🎂','🎉','🎊','✨','💐','🦋','🌈',\n";
     file<<"  '🍫','🍰','🎁','💫'\n";
     file<<"];\n";

     file<<"for(let i=0;i<60;i++){\n";
     file<<"  let e = document.createElement('div');\n";
     file<<"  e.className='heart';\n";
     file<<"  e.innerHTML = emojis[Math.floor(Math.random()*emojis.length)];\n";
     file<<"  e.style.left = Math.random()*100+'vw';\n";
     file<<"  e.style.fontSize = (Math.random()*20 + 15)+'px';\n";
     file<<"  e.style.animationDuration = (Math.random()*3+2)+'s';\n";
     file<<"  document.body.appendChild(e);\n";
     file<<"}\n";   // closes for loop
file<<"}\n";   // closes createEmojis function

file << "</script>\n";
file << "</body>\n";
file << "</html>\n";

file.close();

cout << "Premium Birthday Website Created Successfully! Open birthday.html\n";

return 0;
}

  