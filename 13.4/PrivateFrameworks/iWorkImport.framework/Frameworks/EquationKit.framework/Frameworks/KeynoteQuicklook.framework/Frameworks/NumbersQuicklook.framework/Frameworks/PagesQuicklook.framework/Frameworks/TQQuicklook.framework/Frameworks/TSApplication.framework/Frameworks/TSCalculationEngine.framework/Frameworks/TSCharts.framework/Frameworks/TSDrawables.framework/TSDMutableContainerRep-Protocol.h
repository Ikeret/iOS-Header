//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDContainerRep-Protocol.h>

@class NSArray, NSObject, TSDRep;
@protocol TSDMutableContainerInfo;

@protocol TSDMutableContainerRep <TSDContainerRep>
@property(readonly, nonatomic) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;
- (void)replaceChildRep:(TSDRep *)arg1 with:(TSDRep *)arg2;
- (void)removeChildRep:(TSDRep *)arg1;
- (void)insertChildRep:(TSDRep *)arg1 above:(TSDRep *)arg2;
- (void)insertChildRep:(TSDRep *)arg1 below:(TSDRep *)arg2;
- (void)insertChildRep:(TSDRep *)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildRep:(TSDRep *)arg1;
- (void)setChildReps:(NSArray *)arg1;
@end

