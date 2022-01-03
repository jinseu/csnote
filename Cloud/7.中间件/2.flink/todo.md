1. Transaction 的概念如何理解？
2. Transaction和TransactionSource之间的关系？
3. 执行环境如何理解？



### JAVA SPI

> https://docs.oracle.com/javase/tutorial/sound/SPI-intro.html

### TableSource

Scan Table Source

A ScanTableSource scans all rows from an external storage system during runtime.

### Lookup Table Source

A LookupTableSource looks up rows of an external storage system by one or more keys during runtime.

Compared to ScanTableSource, the source does not have to read the entire table and can lazily fetch individual values from a (possibly continuously changing) external table when necessary.


getAutoWatermarkInterval

https://www.jianshu.com/p/f7afa734a545

https://blog.jrwang.me/2019/flink-source-code-data-exchange/


Notions of Time: Event Time and Processing Time

Processing time: Processing time refers to the system time of the machine that is executing the respective operation.

Event time: Event time is the time that each individual event occurred on its producing device. This time is typically embedded within the records before they enter Flink, and that event timestamp can be extracted from each record. In event time, the progress of time depends on the data, not on any wall clocks. Event time programs must specify how to generate Event Time Watermarks, which is the mechanism that signals progress in event time. This watermarking mechanism is described in a later section, below.

https://nightlies.apache.org/flink/flink-docs-release-1.2/dev/datastream_api.html
https://cloud.tencent.com/developer/article/1584932
