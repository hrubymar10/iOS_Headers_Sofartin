/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAState : NSObject <NSCoding, NSCopying> {
    NSString *_basedOn;
    NSMutableArray *_elements;
    bool _enabled;
    bool _initial;
    bool _locked;
    NSString *_name;
    double _nextDelay;
    double _previousDelay;
}

@property (copy) NSString *basedOn;
@property (nonatomic, copy) NSArray *elements;
@property (getter=isEnabled) bool enabled;
@property (getter=isInitial) bool initial;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, copy) NSString *name;
@property double nextDelay;
@property double previousDelay;

+ (void)CAMLParserStartElement:(id)arg1;

- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)CAMLTypeForKey:(id)arg1;
- (void)addElement:(id)arg1;
- (id)basedOn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)elements;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)foreachLayer:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isInitial;
- (bool)isLocked;
- (id)name;
- (double)nextDelay;
- (double)previousDelay;
- (void)removeElement:(id)arg1;
- (void)setBasedOn:(id)arg1;
- (void)setElements:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInitial:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNextDelay:(double)arg1;
- (void)setPreviousDelay:(double)arg1;

@end
