/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWSyncServiceResponse : NSObject <NSXMLParserDelegate> {
    NSString *_currentLeafElement;
    NSMutableString *_email;
    NSString *_errorCode;
    bool _hasFoundRootElement;
    NSMutableString *_pin;
    NSMutableString *_pinStatus;
    NSMutableString *_screenName;
    NSMutableString *_serviceException;
    NSMutableString *_status;
    NSMutableString *_token;
    NSError *_validationError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *email;
@property (nonatomic, readonly) NSString *errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *pin;
@property (nonatomic, readonly) NSString *pinStatus;
@property (nonatomic, readonly) NSString *screenName;
@property (nonatomic, readonly) NSString *serviceException;
@property (nonatomic, readonly) NSString *status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *token;

- (void)dealloc;
- (id)email;
- (id)errorCode;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)pin;
- (id)pinStatus;
- (id)screenName;
- (id)serviceException;
- (id)status;
- (id)token;

@end
