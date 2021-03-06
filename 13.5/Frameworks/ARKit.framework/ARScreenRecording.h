//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RPScreenRecorder, UIViewController;

@interface ARScreenRecording : NSObject
{
    _Bool _saveInPhotosLibrary;
    UIViewController *_parentViewController;
    RPScreenRecorder *_recorder;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RPScreenRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) _Bool saveInPhotosLibrary; // @synthesize saveInPhotosLibrary=_saveInPhotosLibrary;
- (void)stopRecordingWithHandler:(CDUnknownBlockType)arg1;
- (void)startRecordingWithHandler:(CDUnknownBlockType)arg1;
- (id)initWith:(id)arg1;

@end

