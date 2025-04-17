///week08_4_bubble_ballon_part1
void setup(){
  size(500,400);
}
void draw(){
  background(204);
  ellipse(x,y,s,s);//�e��y
  if(mousePressed)s += 2;//�@����mouse�N�|�ܤj
}
float x = 0, y = 0, s = 0;//��y�y��&�j�p
void mousePressed(){
  x = mouseX;//��y�y��
  y = mouseY;
  s = 1;//��y�@�}�l���j�p
}
