//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@protocol NUVideoProperties;

@interface NUVideoPropertiesJob : NURenderJob
{
    id <NUVideoProperties> _videoProperties;
}

- (void).cxx_destruct;
- (id)result;
- (_Bool)prepare:(out id *)arg1;
- (_Bool)wantsCompleteStage;
- (_Bool)wantsRenderStage;

@end

