///week06_4a_array_x_y_int_N_for_mousePressed
//�qweek04_5�����A�Q��for�j��+�}�C,�e�X�ܦh�}�Ƥ��|��
void setup(){
  size(600,400);
}
float []x = new float[100];//100��x�M100��y
float []y = new float[100];//Java�}�C�ŧi
int N = 0;
void draw(){
  background( #C0FFEE );
  for(int i=0; i<N; i++){
    ellipse(x[i], y[i], 8, 8);
    y[i] += 2;
  }
}
void mousePressed(){
  x[N] = mouseX;
  y[N] = mouseY;
  N++;//�W�[1���}��
}
