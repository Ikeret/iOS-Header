//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/NSObject-Protocol.h>

@class NSArray;

@protocol TSKChangeSourceObserver <NSObject>

@optional
- (void)asyncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
- (void)syncProcessChanges:(NSArray *)arg1 forChangeSource:(id)arg2;
@end

