/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMoveAction : DAAction {
    NSString *_destinationContainerId;
    NSString *_sourceContainerId;
    NSString *_sourceServerId;
}

@property(assign,retain) NSString * destinationContainerId;
@property(assign,retain) NSString * sourceContainerId;
@property(assign,retain) NSString * sourceServerId;

- (void).cxx_destruct;
- (id)destinationContainerId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;
- (void)setDestinationContainerId:(id)arg1;
- (void)setSourceContainerId:(id)arg1;
- (void)setSourceServerId:(id)arg1;
- (id)sourceContainerId;
- (id)sourceServerId;

@end
