/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPlaintextResponseBodyParser : NSObject <CKDResponseBodyParser> {
    id _objectParsedBlock;
    NSMutableData *_parserData;
    NSError *_parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id objectParsedBlock;
@property (nonatomic, retain) NSMutableData *parserData;
@property (nonatomic, retain) NSError *parserError;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id)arg1;
- (id)objectParsedBlock;
- (id)parserData;
- (id)parserError;
- (void)processData:(id)arg1;
- (void)setObjectParsedBlock:(id)arg1;
- (void)setParserData:(id)arg1;
- (void)setParserError:(id)arg1;

@end
