require "numo/narray"

#NarRay型の変数を二つ宣言して、初期化
sc_score = Numo::DFloat[65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]
en_score = Numo::DFloat[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

#-----------------------------------------------------
#メソッドを使用して各教科の平均、標準偏差、合計点を出力する
print "理科の平均点は",sc_score.mean,"です。\n"
print "理科の標準偏差は",sc_score.stddev,"です。\n"
print "理科の合計点は",sc_score.sum,"です。\n"

print "英語の平均点は",en_score.mean,"です。\n"
print "英語の標準偏差は",en_score.stddev,"です。\n"
print "英語の合計点は",en_score.sum,"です。\n"

#------------------------------------------------------
##偏差値を求めて、出力する
sc_ave = sc_score.mean
sc_std = sc_score.stddev
print "理科の偏差値は\n"

for i in sc_score.to_a
	print (50+10*(i-sc_ave)/sc_std).round(1),"\n"
end


en_ave = en_score.mean
en_std = en_score.stddev
print "英語の偏差値は\n"

for i in en_score.to_a
	print (50+10*(i-en_ave)/en_std).round(1),"\n"
end

#--------------------------------------------------
#sortメソッドの後、to_aで配列に直して,reverseで反転することで
#高い順に出力する
print "理科の高い順は\n"
for i in sc_score.sort.to_a.reverse
    print i,"\n"
end 

print "英語の高い順は\n"
for i in en_score.sort.to_a.reverse
    print i,"\n"
end 
