//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NSString, PDCloudStoreContainer;

@protocol PDCloudStoreContainerDelegate <NSObject>
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreContainer *)arg1;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreContainer:(PDCloudStoreContainer *)arg1 createdZoneWithName:(NSString *)arg2 forContainerName:(NSString *)arg3;
@end

