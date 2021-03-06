/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLArchiver : NSCoder {
    id _archive;
    id _archiveCursor;
    bool _forDisplay;
    id _rootObject;
}

@property(assign,readonly) bool forDisplay;

+ (id)archivedDataWithRootObject:(id)arg1;
+ (id)archivedDataWithRootObject:(id)arg1 usingBlock:(id)arg2;
+ (id)archivedPropertyListWithRootObject:(id)arg1;
+ (id)archivedPropertyListWithRootObject:(id)arg1 usingBlock:(id)arg2;
+ (id)displayablePropertyListWithRootObject:(id)arg1;
+ (id)fullDescriptionForObject:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2;

- (void).cxx_destruct;
- (bool)allowsKeyedCoding;
- (id)archivedPropertyList;
- (bool)containsValueForKey:(id)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(void*)arg3;
- (bool)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2;
- (void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (struct CGPoint { double x1; double x2; })decodePointForKey:(id)arg1;
- (id)decodePropertyList;
- (id)decodePropertyListForKey:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })decodeRectForKey:(id)arg1;
- (struct CGSize { double x1; double x2; })decodeSizeForKey:(id)arg1;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void*)arg3;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)encodePoint:(struct CGPoint { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodePropertyList:(id)arg1;
- (void)encodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forKey:(id)arg2;
- (void)encodeRootObject:(id)arg1;
- (void)encodeSize:(struct CGSize { double x1; double x2; })arg1 forKey:(id)arg2;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (bool)forDisplay;
- (id)initWithArchive:(id)arg1 rootClass:(Class)arg2;
- (id)initWithRootObject:(id)arg1 forDisplay:(bool)arg2;
- (id)initWithRootObject:(id)arg1 forDisplay:(bool)arg2 block:(id)arg3;
- (struct _NSZone { }*)objectZone;
- (id)rootObject;
- (void)setObjectZone:(struct _NSZone { }*)arg1;

@end
