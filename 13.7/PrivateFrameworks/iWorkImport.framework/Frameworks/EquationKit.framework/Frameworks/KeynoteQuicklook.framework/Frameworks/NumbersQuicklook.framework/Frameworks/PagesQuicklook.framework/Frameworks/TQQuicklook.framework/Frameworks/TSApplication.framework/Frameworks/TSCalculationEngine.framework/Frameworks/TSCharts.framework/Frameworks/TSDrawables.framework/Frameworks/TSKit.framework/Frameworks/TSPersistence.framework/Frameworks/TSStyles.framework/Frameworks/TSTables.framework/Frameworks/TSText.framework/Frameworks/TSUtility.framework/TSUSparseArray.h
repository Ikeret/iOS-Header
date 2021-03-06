//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSUtility/NSCopying-Protocol.h>

@class NSIndexSet;

@interface TSUSparseArray : NSObject <NSCopying>
{
    struct tsuSaPage *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

+ (id)array;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSIndexSet *populatedKeys;
@property(readonly) unsigned long long maxKey;
@property(readonly) unsigned long long minKey;
@property(readonly) unsigned long long count;
- (void)clear;
- (void)addObjectsFromArray:(id)arg1;
- (void)foreach:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(unsigned long long)arg1;
- (_Bool)hasObjectForKey:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(unsigned long long)arg2;
- (void)increaseDepth;
- (id)objectForKey:(unsigned long long)arg1;
- (unsigned long long)maxIndexForCurrentDepth;
- (id)description;
- (void)dealloc;

@end

