//week0_4_float_x_y_if_mousePressed_mouseX_mouseY
void setup(){
  size(400,400);
}
float x = 300, y = 200;
void draw(){
  background( #C0FFEE );//不是O 是0
  ellipse(x, y, 8, 8);
  if(mousePressed){ //如果mouse按下去
  x = (x  + mouseX)/2; //放到中間
  y = (y  + mouseY)/2; //放到中間
  }
}
