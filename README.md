# training-C
トレーニングの記録。

## 課題1-1 2015-07-23
(まずは)Cで！普通の電卓を作ってみよう！
＋、－、÷、×

1.処理概要
起動パラメータとして「x」と「y」の2つの整数、演算子を受け取り、
足し算と引き算と、その足し算と引き算だけを使って割り算または、掛け算を行い答えを表示する。


2.入力パラメータ仕様
入力パラメータは、起動パラメータとして受け取る。

> [x] [式] [y]

また、終了時は、quitもしくはexitで終了させる。


3.入力チェック仕様
入力パラメータは、以下の規則によりチェックする。  
エラーメッセージ  
パラメータ数：3つあること        引数の数が足りません。  
x：数値であること                    xは数値ではありません。  
y：数値であること                    yは数値ではありません。  
式：＋、－、÷、×であること       計算式が誤っています。  

4.計算
(a)足し算

(b)引き算

(c) 割算
xからyを繰り返し引きます。
x＜y となるまで繰り返します。
繰り返した回数が商となります。

(d) 掛算
xを答えに繰り返し足します。
足した回数がyとイコールとなるまで繰り返します。


5.出力編集
出力はコンソールに行うものとし、以下の形式で出力する。  
Ｎ：式  
----*----*----*----*----*----*----*----  
99999 Ｎ 99999 ＝ 99999 ... 99999


6.例外処理  
以下の場合はエラーとしメッセージを出力します。

ゼロ除算：yがゼロである            →       0割りはできません


7.制約事項
本計算機システムは整数（正数）のみの対応とします。

-------

* 経過 2015-07-30
途中経過をアップロード。　[dentaku.c](https://github.com/iwaue/training-C/blob/master/dentaku.c)

* 経過 2015-08-08
途中経過をアップロード。一応完成？　[dentaku02.c](https://github.com/iwaue/training-C/blob/master/dentaku02.c)


## 追加課題
gets関数を利用しないようにしてください。  
読込みは、1列で電卓のようにしてください。  
ルート計算ができるようにしてください。  
その後は、電卓のメモリ機能も実装してください。  


