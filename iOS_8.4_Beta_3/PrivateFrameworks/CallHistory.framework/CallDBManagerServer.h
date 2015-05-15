/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

@interface CallDBManagerServer : CallDBManager

+ (id)getDestinationModel:(long long)arg1;
+ (id)getDestinationModelForVersion:(long long)arg1;

- (bool)bootUpDBAtLocation:(id)arg1 isEncrypted:(bool)arg2;
- (void)createPermanent;
- (void)createTemporary;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation;
- (id)tempDBLocation;

@end
