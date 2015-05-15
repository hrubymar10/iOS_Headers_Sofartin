/* Generated by RuntimeBrowser.
 */

@protocol SKUILibraryInterface <NSObject>

@required

- (void)enumerateStatesForLibraryItems:(NSSet *)arg1 usingBlock:(id)arg2;
- (SKUILibraryItemState *)stateForLibraryItem:(SKUILibraryItem *)arg1;

@optional

- (NSSet *)exposedPlatformItemKinds;
- (bool)performActionForLibraryItem:(SKUILibraryItem *)arg1;

@end
