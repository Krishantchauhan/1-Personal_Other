# import tensorflow as tf
# hello=tf.constant("hello world")
# sess=tf.Session()
# print(sess.run(hello))



import tensorflow as tf
# # Create TensorFlow object called hello_constant
# hello_constant = tf.constant('Hello World!')
# with tf.Session() as sess:
#     # Run the tf.constant operation in the session
#     output = sess.run(hello_constant)
#     print(output)
t=tf.zeros([5,6,9,8])

print(t)
