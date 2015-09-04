/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticbeanstalk/model/TerminateEnvironmentResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

TerminateEnvironmentResult::TerminateEnvironmentResult() : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0),
    m_abortableOperationInProgress(false)
{
}

TerminateEnvironmentResult::TerminateEnvironmentResult(const AmazonWebServiceResult<XmlDocument>& result) : 
    m_dateCreated(0.0),
    m_dateUpdated(0.0),
    m_abortableOperationInProgress(false)
{
  *this = result;
}

TerminateEnvironmentResult& TerminateEnvironmentResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode.FirstChild("TerminateEnvironmentResult");

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(environmentNameNode.IsNull())
    {
      environmentNameNode = resultNode;
    }

    if(!environmentNameNode.IsNull())
    {
      m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
    }
    XmlNode environmentIdNode = resultNode.FirstChild("EnvironmentId");
    if(environmentIdNode.IsNull())
    {
      environmentIdNode = resultNode;
    }

    if(!environmentIdNode.IsNull())
    {
      m_environmentId = StringUtils::Trim(environmentIdNode.GetText().c_str());
    }
    XmlNode applicationNameNode = resultNode.FirstChild("ApplicationName");
    if(applicationNameNode.IsNull())
    {
      applicationNameNode = resultNode;
    }

    if(!applicationNameNode.IsNull())
    {
      m_applicationName = StringUtils::Trim(applicationNameNode.GetText().c_str());
    }
    XmlNode versionLabelNode = resultNode.FirstChild("VersionLabel");
    if(versionLabelNode.IsNull())
    {
      versionLabelNode = resultNode;
    }

    if(!versionLabelNode.IsNull())
    {
      m_versionLabel = StringUtils::Trim(versionLabelNode.GetText().c_str());
    }
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(solutionStackNameNode.IsNull())
    {
      solutionStackNameNode = resultNode;
    }

    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = StringUtils::Trim(solutionStackNameNode.GetText().c_str());
    }
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(templateNameNode.IsNull())
    {
      templateNameNode = resultNode;
    }

    if(!templateNameNode.IsNull())
    {
      m_templateName = StringUtils::Trim(templateNameNode.GetText().c_str());
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(descriptionNode.IsNull())
    {
      descriptionNode = resultNode;
    }

    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
    }
    XmlNode endpointURLNode = resultNode.FirstChild("EndpointURL");
    if(endpointURLNode.IsNull())
    {
      endpointURLNode = resultNode;
    }

    if(!endpointURLNode.IsNull())
    {
      m_endpointURL = StringUtils::Trim(endpointURLNode.GetText().c_str());
    }
    XmlNode cNAMENode = resultNode.FirstChild("CNAME");
    if(cNAMENode.IsNull())
    {
      cNAMENode = resultNode;
    }

    if(!cNAMENode.IsNull())
    {
      m_cNAME = StringUtils::Trim(cNAMENode.GetText().c_str());
    }
    XmlNode dateCreatedNode = resultNode.FirstChild("DateCreated");
    if(dateCreatedNode.IsNull())
    {
      dateCreatedNode = resultNode;
    }

    if(!dateCreatedNode.IsNull())
    {
      m_dateCreated = StringUtils::ConvertToDouble(StringUtils::Trim(dateCreatedNode.GetText().c_str()).c_str());
    }
    XmlNode dateUpdatedNode = resultNode.FirstChild("DateUpdated");
    if(dateUpdatedNode.IsNull())
    {
      dateUpdatedNode = resultNode;
    }

    if(!dateUpdatedNode.IsNull())
    {
      m_dateUpdated = StringUtils::ConvertToDouble(StringUtils::Trim(dateUpdatedNode.GetText().c_str()).c_str());
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(statusNode.IsNull())
    {
      statusNode = resultNode;
    }

    if(!statusNode.IsNull())
    {
      m_status = EnvironmentStatusMapper::GetEnvironmentStatusForName(StringUtils::Trim(statusNode.GetText().c_str()).c_str());
    }
    XmlNode abortableOperationInProgressNode = resultNode.FirstChild("AbortableOperationInProgress");
    if(abortableOperationInProgressNode.IsNull())
    {
      abortableOperationInProgressNode = resultNode;
    }

    if(!abortableOperationInProgressNode.IsNull())
    {
      m_abortableOperationInProgress = StringUtils::ConvertToBool(StringUtils::Trim(abortableOperationInProgressNode.GetText().c_str()).c_str());
    }
    XmlNode healthNode = resultNode.FirstChild("Health");
    if(healthNode.IsNull())
    {
      healthNode = resultNode;
    }

    if(!healthNode.IsNull())
    {
      m_health = EnvironmentHealthMapper::GetEnvironmentHealthForName(StringUtils::Trim(healthNode.GetText().c_str()).c_str());
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(healthStatusNode.IsNull())
    {
      healthStatusNode = resultNode;
    }

    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = EnvironmentHealthStatusMapper::GetEnvironmentHealthStatusForName(StringUtils::Trim(healthStatusNode.GetText().c_str()).c_str());
    }
    XmlNode resourcesNode = resultNode.FirstChild("Resources");
    if(resourcesNode.IsNull())
    {
      resourcesNode = resultNode;
    }

    if(!resourcesNode.IsNull())
    {
      m_resources = resourcesNode;
    }
    XmlNode tierNode = resultNode.FirstChild("Tier");
    if(tierNode.IsNull())
    {
      tierNode = resultNode;
    }

    if(!tierNode.IsNull())
    {
      m_tier = tierNode;
    }
  }

  XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
  m_responseMetadata = responseMetadataNode;

  return *this;
}