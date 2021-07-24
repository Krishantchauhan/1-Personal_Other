from pyspark.sql import SparkSession

spark=SparkSession.builder.appName('Basics').getOrCreate()

df=spark.read.json('people.json')


# print(df)
df.show()
df.printSchema()
# df.columns
df.describe()

df.describe().show()
