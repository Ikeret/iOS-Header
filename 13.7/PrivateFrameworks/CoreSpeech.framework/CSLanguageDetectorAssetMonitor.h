//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSLanguageDetectorAssetMonitorDelegate, OS_dispatch_queue;

@interface CSLanguageDetectorAssetMonitor : NSObject
{
    int _notifyToken;
    id <CSLanguageDetectorAssetMonitorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) int notifyToken; // @synthesize notifyToken=_notifyToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSLanguageDetectorAssetMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_supportedLocale:(CDUnknownBlockType)arg1;
- (void)supportedLocale:(CDUnknownBlockType)arg1;
- (void)startMonitor;
- (id)init;

@end

