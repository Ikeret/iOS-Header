//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface HDDemoData : NSObject
{
    NSString *_demoDataPath;
    NSFileManager *_fileManager;
}

+ (id)demoDataDirectory;
+ (_Bool)willBeGeneratingDemoData;
+ (_Bool)shouldUseDemoDataDirectory;
- (void).cxx_destruct;
- (id)_directoryPath;
- (_Bool)_resetDemoDataDB;
- (id)initWithProfileType:(long long)arg1;

@end

