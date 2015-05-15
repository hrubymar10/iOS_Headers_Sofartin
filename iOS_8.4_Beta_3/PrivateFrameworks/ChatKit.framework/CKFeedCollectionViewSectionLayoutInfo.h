/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFeedCollectionViewSectionLayoutInfo : NSObject {
    long long _firstJoinedSection;
    NSArray *_fixedLayoutAttributes;
    NSArray *_floatingLayoutAttributes;
    struct CGSize { 
        double width; 
        double height; 
    } _footerSize;
    id _groupID;
    struct CGSize { 
        double width; 
        double height; 
    } _headerSize;
    bool _hidden;
    long long _lastJoinedSection;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _margins;
    long long _nextVisibleSection;
    long long _numberOfTilesOmitted;
    struct CGPoint { 
        double x; 
        double y; 
    } _origin;
    long long _previousVisibleSection;
    long long _sectionType;
    struct CGSize { 
        double width; 
        double height; 
    } _size;
    NSArray *_tileLayoutAttributes;
}

@property(assign,readwrite) long long firstJoinedSection;
@property(assign,retain) NSArray * fixedLayoutAttributes;
@property(assign,retain) NSArray * floatingLayoutAttributes;
@property(assign,readwrite) struct CGSize { double x1; double x2; } footerSize;
@property(assign,readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property(assign,retain) id groupID;
@property(assign,readwrite) struct CGSize { double x1; double x2; } headerSize;
@property(getter=isHidden,assign,readwrite) bool hidden;
@property(assign,readwrite) long long lastJoinedSection;
@property(assign,readwrite) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } margins;
@property(assign,readwrite) long long nextVisibleSection;
@property(assign,readwrite) long long numberOfTilesOmitted;
@property(assign,readwrite) struct CGPoint { double x1; double x2; } origin;
@property(assign,readwrite) long long previousVisibleSection;
@property(assign,readwrite) long long sectionType;
@property(assign,readwrite) struct CGSize { double x1; double x2; } size;
@property(assign,retain) NSArray * tileLayoutAttributes;

- (void).cxx_destruct;
- (long long)firstJoinedSection;
- (id)fixedLayoutAttributes;
- (id)floatingLayoutAttributes;
- (struct CGSize { double x1; double x2; })footerSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)groupID;
- (struct CGSize { double x1; double x2; })headerSize;
- (id)init;
- (bool)isHidden;
- (long long)lastJoinedSection;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })margins;
- (long long)nextVisibleSection;
- (long long)numberOfTilesOmitted;
- (struct CGPoint { double x1; double x2; })origin;
- (long long)previousVisibleSection;
- (long long)sectionType;
- (void)setFirstJoinedSection:(long long)arg1;
- (void)setFixedLayoutAttributes:(id)arg1;
- (void)setFloatingLayoutAttributes:(id)arg1;
- (void)setFooterSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setGroupID:(id)arg1;
- (void)setHeaderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setLastJoinedSection:(long long)arg1;
- (void)setMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNextVisibleSection:(long long)arg1;
- (void)setNumberOfTilesOmitted:(long long)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPreviousVisibleSection:(long long)arg1;
- (void)setSectionType:(long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTileLayoutAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)tileLayoutAttributes;

@end
