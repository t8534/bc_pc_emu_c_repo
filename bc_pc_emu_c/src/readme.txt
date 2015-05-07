

1.
The Release number contains: a major, a minor, and a revision number,
each of them represented by an 8-bit unsigned integer number.

The major number shall be incremented each time the data structure is not
compatible.

The minor number shall be incremented each time the data structure
is compatible (e.g. data is only added, existing structurs and their meaning
is not changed, new data can be assigned using default data).

The revision number shall be incremented each time the data contents have
changed (e.g. for part number change; different hardware variant; ...).


