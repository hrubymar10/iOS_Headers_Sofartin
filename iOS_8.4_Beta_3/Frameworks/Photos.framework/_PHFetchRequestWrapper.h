/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface _PHFetchRequestWrapper : NSObject <NSCopying> {
    NSManagedObjectID *_containerIdentifier;
    NSFetchRequest *_fetchRequest;
    unsigned long long _hash;
}

@property (nonatomic, readonly) NSManagedObjectID *containerIdentifier;
@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) unsigned long long hash;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fetchRequest;
- (unsigned long long)hash;
- (id)initWithFetchRequest:(id)arg1 containerIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
