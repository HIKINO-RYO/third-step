require "numo/narray"

sc_score = Numo::DFloat[65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70]
en_score = Numo::DFloat[44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84]

print "理科の平均点は",sc_score.mean,"です。\n"
print "理科の標準偏差は",sc_score.stddev,"です。\n"
print "理科の合計点は",sc_score.sum,"です。\n"

print "英語の平均点は",en_score.mean,"です。\n"
print "英語の標準偏差は",en_score.stddev,"です。\n"
print "英語の合計点は",en_score.sum,"です。\n"

print "理科の高い順は\n"
for i in sc_score.sort.to_a.reverse
    print i,"\n"
end 

print "英語の高い順は\n"
for i in en_score.sort.to_a.reverse
    print i,"\n"
end 
