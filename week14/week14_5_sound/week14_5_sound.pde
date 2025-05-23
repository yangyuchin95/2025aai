//week14_5_sound
//sketch - library - manage libraries
//安裝sound,開始
//file - examples 選 libraries核心函式庫 sound - soundfile - JumbleSounfile
import processing.sound.*; //Java使用sound外掛
SoundFile music,sword,monkey,intro;  //宣告一個變數music
void setup(){
  size(640,360); //拉音樂檔進來
  sword = new SoundFile(this, "sword slash.mp3");
  monkey = new SoundFile(this, "Monkey 1.mp3");
  intro = new SoundFile(this, "Intro Song_Final.mp3");
  music = new SoundFile(this, "In Game Music.mp3");
  music.play(); //播放play()
}
void draw(){
  //裡面空白
}
