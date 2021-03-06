/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKUserScript : NSObject <NSCopying> {
    bool _forMainFrameOnly;
    long long _injectionTime;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    } _source;
}

@property(getter=isForMainFrameOnly,assign,readonly) bool forMainFrameOnly;
@property(assign,readonly) long long injectionTime;
@property(assign,copy) NSString * source;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithSource:(id)arg1 injectionTime:(long long)arg2 forMainFrameOnly:(bool)arg3;
- (long long)injectionTime;
- (bool)isForMainFrameOnly;
- (id)source;

@end
