//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;
@protocol MapsApplicationTestingDelegate;

@protocol MapsApplicationTestDelegate <NSObject>
+ (NSString *)extendLaunchTest;
+ (void)failedTest:(NSString *)arg1 applicationTestingDelegate:(id <MapsApplicationTestingDelegate>)arg2;
+ (void)finishedTest:(NSString *)arg1 extraResults:(NSDictionary *)arg2 applicationTestingDelegate:(id <MapsApplicationTestingDelegate>)arg3;
@end

