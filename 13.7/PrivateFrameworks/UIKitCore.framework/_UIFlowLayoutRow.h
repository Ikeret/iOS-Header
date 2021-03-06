//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutRow : NSObject
{
    _Bool _isValid;
    _Bool _complete;
    int _verticalAlignement;
    int _horizontalAlignement;
    _Bool _fixedItemSize;
    _UIFlowLayoutSection *_section;
    long long _index;
    NSMutableArray *_items;
    double _availableSpace;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
}

- (void).cxx_destruct;
@property(nonatomic) double availableSpace; // @synthesize availableSpace=_availableSpace;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(readonly, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(nonatomic) __weak _UIFlowLayoutSection *section; // @synthesize section=_section;
- (long long)indexOfNearestItemAtPoint:(struct CGPoint)arg1;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)removeItemAtIndex:(long long)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
- (void)addItem:(id)arg1 atEnd:(_Bool)arg2;
- (void)layoutRow;
- (void)invalidate;
- (id)init;

@end

