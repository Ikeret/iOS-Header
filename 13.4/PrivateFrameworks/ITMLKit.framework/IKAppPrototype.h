//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKAppPrototypeIdentifier, IKDOMPrototype, NSDictionary, NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface IKAppPrototype : NSObject
{
    NSMutableIndexSet *_usageIndexes;
    IKAppPrototypeIdentifier *_identifier;
    IKDOMPrototype *_prototype;
    NSDictionary *_groupingValues;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *groupingValues; // @synthesize groupingValues=_groupingValues;
@property(readonly, nonatomic) __weak IKDOMPrototype *prototype; // @synthesize prototype=_prototype;
@property(readonly, nonatomic) IKAppPrototypeIdentifier *identifier; // @synthesize identifier=_identifier;
- (id)_sparseObjectFromObject:(id)arg1 usingPropertyPaths:(id)arg2;
- (void)updateUsageIndexesWithChangeSet:(id)arg1;
- (void)removeUsageForIndex:(long long)arg1;
- (void)addUsageForIndex:(long long)arg1;
@property(readonly, copy, nonatomic) NSIndexSet *usageIndexes;
- (id)initWithPrototype:(id)arg1 dataItem:(id)arg2;
- (void)dsepm_setViewElement:(id)arg1;
- (id)dsepm_viewElement;

@end

