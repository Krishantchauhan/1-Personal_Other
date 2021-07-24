import pyspark as spark

#alag hai
# spark.range(1, 7, 2).collect()
#yah tak


#alag hai
# from pyspark.sql import functions as func
# one_through_9 = range(1,10)
# parallel = sc.parallelize(one_through_9, 3)
# def f(iterator):
#     yield sum(iterator)
#
# parallel.mapPartitions(f).collect()


#yah tak
sc = pyspark.SparkContext('local[*]')

txt = sc.textFile('file:////usr/share/doc/python/copyright')
print(txt.count())

python_lines = txt.filter(lambda line: 'python' in line.lower())
print(python_lines.count())
