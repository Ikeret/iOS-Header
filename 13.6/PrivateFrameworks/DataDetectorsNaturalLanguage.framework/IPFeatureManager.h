//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IPFeatureManager : NSObject
{
}

+ (void)setEventStoreForTesting:(id)arg1;
+ (id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2;
+ (void)scanEventsInMessageUnits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)scanEventsInMessageUnits:(id)arg1 synchronously:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

