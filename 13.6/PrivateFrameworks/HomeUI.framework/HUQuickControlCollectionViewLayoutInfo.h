//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUQuickControlCollectionViewLayoutInfo : NSObject
{
    NSMutableArray *_layoutDetailsArray;
    struct CGSize _collectionViewContentSize;
    struct CGRect _availableContentFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *layoutDetailsArray; // @synthesize layoutDetailsArray=_layoutDetailsArray;
@property(nonatomic) struct CGSize collectionViewContentSize; // @synthesize collectionViewContentSize=_collectionViewContentSize;
@property(nonatomic) struct CGRect availableContentFrame; // @synthesize availableContentFrame=_availableContentFrame;

@end

