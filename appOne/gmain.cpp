#include"libOne.h"
void gmain(){
    window(1000, 1000);
    //���̒��p�O�p�`�̒�ӁA������ݒ肵�A�Εӂ����߂Ă���
    float a = 4;
    float b = 3;
    float c = sqrt(a * a + b * b);
    //�g�嗦
    float scale = 1;
    while (notQuit){
        //�g�嗦��ύX
        if (isTrigger(KEY_D))scale += 0.5f;
        if (isTrigger(KEY_A))scale += -0.5f;
        //�g�債����ӁA�����A�Εӂ����߂�
        float x = a * scale;
        float y = b * scale;
        float z = sqrt(x * x + y * y);
        //����`��
        clear(200);
        mathAxis(9.1f);
        //���̒��p�O�p�`��`��
        strokeWeight(10);
        stroke(0);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);
        //�g���̒��p�O�p�`��`��
        stroke(255,0,0,128);
        mathLine(0, 0, x, y);
        mathLine(0, 0, x, 0);
        mathLine(x, 0, x, y);
        //�e�L�X�g����`��
        textSize(40);
        fill(0);
        text((let)"���:" + a + " ����:" + b + " �Ε�:" + c, 0, 50);
        text((let)"�g�嗦:" + scale, 0, 100);
        fill(255, 0, 0);
        text((let)"���:" + x + " ����:" + y + " �Ε�:" + z, 0, 150);
    }
}
