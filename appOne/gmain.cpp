#include"libOne.h"
void gmain(){
    window(1000, 1000);
    //元の直角三角形の底辺、高さを設定し、斜辺を求めておく
    float a = 4;
    float b = 3;
    float c = sqrt(a * a + b * b);
    //拡大率
    float scale = 1;
    while (notQuit){
        //拡大率を変更
        if (isTrigger(KEY_D))scale += 0.5f;
        if (isTrigger(KEY_A))scale += -0.5f;
        //拡大した底辺、高さ、斜辺を求める
        float x = a * scale;
        float y = b * scale;
        float z = sqrt(x * x + y * y);
        //軸を描画
        clear(200);
        mathAxis(9.1f);
        //元の直角三角形を描画
        strokeWeight(10);
        stroke(0);
        mathLine(0, 0, a, b);
        mathLine(0, 0, a, 0);
        mathLine(a, 0, a, b);
        //拡大後の直角三角形を描画
        stroke(255,0,0,128);
        mathLine(0, 0, x, y);
        mathLine(0, 0, x, 0);
        mathLine(x, 0, x, y);
        //テキスト情報を描画
        textSize(40);
        fill(0);
        text((let)"底辺:" + a + " 高さ:" + b + " 斜辺:" + c, 0, 50);
        text((let)"拡大率:" + scale, 0, 100);
        fill(255, 0, 0);
        text((let)"底辺:" + x + " 高さ:" + y + " 斜辺:" + z, 0, 150);
    }
}
