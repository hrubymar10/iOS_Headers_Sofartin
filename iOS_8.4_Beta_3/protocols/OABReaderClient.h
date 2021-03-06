/* Generated by RuntimeBrowser.
 */

@protocol OABReaderClient

@required

+ (bool)escherIsFullySupported;
+ (void)readClientDataFromGroup:(ESDContainer *)arg1 toGroup:(OADGroup *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromShape:(ESDObject *)arg1 toGraphic:(OADGraphic *)arg2 state:(OABReaderState *)arg3;
+ (void)readClientDataFromTableCell:(ESDObject *)arg1 toTableCell:(OADTableCell *)arg2 state:(OABReaderState *)arg3;
+ (bool)tablesAreAllowed;

@end
